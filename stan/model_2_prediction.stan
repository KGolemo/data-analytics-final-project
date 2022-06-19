data {
    int<lower=0> N;                 // num of observations

    real alpha_driver[N];            // alpha_driver related to a specific driver
    real alpha_constructor[N];       // alpha_constructor related to a specific constructor
    real alpha_driver_year[N];       // alpha_driver_year related to a specific driver in a specific year
    real alpha_constructor_year[N];  // alpha_constructor_year related to a specific constructor in a specific year
}

generated quantities {
    real y_hat[N];
    for (i in 1:N)
        y_hat[i] = binomial_rng(20, inv_logit(alpha_driver[i] + alpha_constructor[i] + alpha_driver_year[i] + alpha_constructor_year[i]));
}