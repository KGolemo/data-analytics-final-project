// Separate beta for each of the drivers, separate beta for each of the constructors
// and separate betas for each of the drivers/constructors in each of the year
data {
    int<lower=1> N;                         // num of observations
    int<lower=1> D;                         // num of unique drivers
    int<lower=1> C;                         // num of unique constructors
    int<lower=0> Y;                         // num of unique years
    int<lower=1, upper=D> driver[N];        // drivers indices list
    int<lower=1, upper=C> constructor[N];   // constructors indices list
    int<lower=1, upper=Y> year[N];          // years indices list
    int<lower=0, upper=19> position[N];     // race position
}

parameters {
    vector[D] alpha_driver;
    vector[C] alpha_constructor;
    matrix[Y, D] alpha_driver_year;
    matrix[Y, C] alpha_constructor_year;
} 

transformed parameters {
    vector[N] theta;

    for (i in 1:N)
        theta[i] = inv_logit(alpha_driver[driver[i]] + alpha_constructor[constructor[i]] + alpha_driver_year[year[i], driver[i]] + alpha_constructor_year[year[i], constructor[i]]);
}

model {
    alpha_driver ~ normal(0, 0.75);
    alpha_constructor ~ normal(0, 0.75);
    to_vector(alpha_driver_year) ~ normal(0, 0.75);
    to_vector(alpha_constructor_year) ~ normal(0, 0.75);
    // alpha_driver ~ student_t(5, 0, 0.5);
    // alpha_constructor ~ student_t(5, 0, 0.5);
    // to_vector(alpha_driver_year) ~ student_t(5, 0, 0.5);
    // to_vector(alpha_constructor_year) ~ student_t(5, 0, 0.5);

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