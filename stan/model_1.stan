// Separate beta for each of the drivers and separate beta for each of the constructors

data {
    int<lower=1> N;                         // num of observations
    int<lower=1> D;                         // num of unique drivers
    int<lower=1> C;                         // num of unique constructors
    int<lower=1, upper=D> driver[N];        // drivers indices list
    int<lower=1, upper=C> constructor[N];   // constructors indices list
    int<lower=0, upper=19> position[N];     // race position
}

parameters {
    vector[D] alpha_driver;
    vector[C] alpha_constructor;
} 

transformed parameters {
    vector[N] theta;

    for (i in 1:N)
        theta[i] = inv_logit(alpha_driver[driver[i]] + alpha_constructor[constructor[i]]);
}

model {
    alpha_driver ~ normal(0, 1);
    alpha_constructor ~ normal(0, 1);
    // alpha_driver ~ student_t(5, 0, 0.5);
    // alpha_constructor ~ student_t(5, 0, 0.5);

    position ~ binomial(19, theta);
}

generated quantities {
    vector[N] log_lik;
    vector[N] y_hat;
    for (j in 1:N) {
        log_lik[j] = binomial_lpmf(position[j] | 19, theta[j]);
        y_hat[j] = binomial_rng(19, theta[j]);
    }   
}