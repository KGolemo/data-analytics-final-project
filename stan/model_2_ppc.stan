data {
    int<lower=1> N;     // number of different drivers, constructors
    real sigma;         // prior std
}

transformed data {
   vector[N] ones_N = rep_vector(1, N);
}

generated quantities {
    real alpha_driver[N] = normal_rng(0, ones_N*sigma);        // prior model
    real alpha_constructor[N] = normal_rng(0, ones_N*sigma);       // prior model
    real alpha_driver_year[N] = normal_rng(0, ones_N*sigma);       // prior model
    real alpha_constructor_year[N] = normal_rng(0, ones_N*sigma);      // prior model

    vector[N] theta = inv_logit(to_vector(alpha_driver) + to_vector(alpha_constructor) + to_vector(alpha_driver_year) + to_vector(alpha_constructor_year));
    int y_ppc[N] = binomial_rng(19, theta);
}