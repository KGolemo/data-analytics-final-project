
// Code generated by stanc v2.29.2
#include <stan/model/model_header.hpp>
namespace model_2_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 40> locations_array__ = 
{" (found before start of program)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 15, column 4 to column 27)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 16, column 4 to column 32)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 17, column 4 to column 35)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 18, column 4 to column 40)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 22, column 4 to column 20)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 25, column 8 to column 180)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 24, column 4 to line 25, column 180)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 42, column 4 to column 22)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 43, column 4 to column 20)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 45, column 8 to column 63)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 46, column 8 to column 46)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 44, column 19 to line 47, column 5)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 44, column 4 to line 47, column 5)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 29, column 4 to column 35)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 30, column 4 to column 40)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 31, column 4 to column 51)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 32, column 4 to column 56)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 38, column 4 to column 35)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 4, column 4 to column 19)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 5, column 4 to column 19)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 6, column 4 to column 19)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 7, column 4 to column 19)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 8, column 33 to column 34)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 8, column 4 to column 36)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 9, column 38 to column 39)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 9, column 4 to column 41)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 10, column 31 to column 32)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 10, column 4 to column 34)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 11, column 36 to column 37)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 11, column 4 to column 39)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 15, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 16, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 17, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 17, column 14 to column 15)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 18, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 18, column 14 to column 15)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 22, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 42, column 11 to column 12)",
 " (in 'F:/AGH/AGHAIR~2/AGHSEM~1/DATAAN~1/f1/model_2.stan', line 43, column 11 to column 12)"};




class model_2_model final : public model_base_crtp<model_2_model> {

 private:
  int N;
  int D;
  int C;
  int Y;
  std::vector<int> driver;
  std::vector<int> constructor;
  std::vector<int> year;
  std::vector<int> position; 
  
 
 public:
  ~model_2_model() { }
  
  inline std::string model_name() const final { return "model_2_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.2", "stancflags = "};
  }
  
  
  model_2_model(stan::io::var_context& context__,
                unsigned int random_seed__ = 0,
                std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "model_2_model_namespace::model_2_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 19;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 19;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 19;
      stan::math::check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 20;
      context__.validate_dims("data initialization","D","int",
           std::vector<size_t>{});
      D = std::numeric_limits<int>::min();
      
      
      current_statement__ = 20;
      D = context__.vals_i("D")[(1 - 1)];
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "D", D, 1);
      current_statement__ = 21;
      context__.validate_dims("data initialization","C","int",
           std::vector<size_t>{});
      C = std::numeric_limits<int>::min();
      
      
      current_statement__ = 21;
      C = context__.vals_i("C")[(1 - 1)];
      current_statement__ = 21;
      stan::math::check_greater_or_equal(function__, "C", C, 1);
      current_statement__ = 22;
      context__.validate_dims("data initialization","Y","int",
           std::vector<size_t>{});
      Y = std::numeric_limits<int>::min();
      
      
      current_statement__ = 22;
      Y = context__.vals_i("Y")[(1 - 1)];
      current_statement__ = 22;
      stan::math::check_greater_or_equal(function__, "Y", Y, 0);
      current_statement__ = 23;
      stan::math::validate_non_negative_index("driver", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","driver","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      driver = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 24;
      driver = context__.vals_i("driver");
      current_statement__ = 24;
      stan::math::check_greater_or_equal(function__, "driver", driver, 1);
      current_statement__ = 24;
      stan::math::check_less_or_equal(function__, "driver", driver, D);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("constructor", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","constructor","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      constructor = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 26;
      constructor = context__.vals_i("constructor");
      current_statement__ = 26;
      stan::math::check_greater_or_equal(function__, "constructor",
                                            constructor, 1);
      current_statement__ = 26;
      stan::math::check_less_or_equal(function__, "constructor", constructor,
                                         C);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("year", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization","year","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      year = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 28;
      year = context__.vals_i("year");
      current_statement__ = 28;
      stan::math::check_greater_or_equal(function__, "year", year, 1);
      current_statement__ = 28;
      stan::math::check_less_or_equal(function__, "year", year, Y);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("position", "N", N);
      current_statement__ = 30;
      context__.validate_dims("data initialization","position","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      position = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 30;
      position = context__.vals_i("position");
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "position", position, 0);
      current_statement__ = 30;
      stan::math::check_less_or_equal(function__, "position", position, 19);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("alpha_driver", "D", D);
      current_statement__ = 32;
      stan::math::validate_non_negative_index("alpha_constructor", "C", C);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("alpha_driver_year", "Y", Y);
      current_statement__ = 34;
      stan::math::validate_non_negative_index("alpha_driver_year", "D", D);
      current_statement__ = 35;
      stan::math::validate_non_negative_index("alpha_constructor_year", "Y",
                                              Y);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("alpha_constructor_year", "C",
                                              C);
      current_statement__ = 37;
      stan::math::validate_non_negative_index("theta", "N", N);
      current_statement__ = 38;
      stan::math::validate_non_negative_index("log_lik", "N", N);
      current_statement__ = 39;
      stan::math::validate_non_negative_index("y_hat", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = D + C + (Y * D) + (Y * C);
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model_2_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> alpha_driver =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(D, DUMMY_VAR__);
      current_statement__ = 1;
      alpha_driver = in__.template read<
                       Eigen::Matrix<local_scalar_t__, -1, 1>>(D);
      Eigen::Matrix<local_scalar_t__, -1, 1> alpha_constructor =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 2;
      alpha_constructor = in__.template read<
                            Eigen::Matrix<local_scalar_t__, -1, 1>>(C);
      Eigen::Matrix<local_scalar_t__, -1, -1> alpha_driver_year =
         Eigen::Matrix<local_scalar_t__, -1, -1>::Constant(Y, D, DUMMY_VAR__);
      current_statement__ = 3;
      alpha_driver_year = in__.template read<
                            Eigen::Matrix<local_scalar_t__, -1, -1>>(Y, D);
      Eigen::Matrix<local_scalar_t__, -1, -1> alpha_constructor_year =
         Eigen::Matrix<local_scalar_t__, -1, -1>::Constant(Y, C, DUMMY_VAR__);
      current_statement__ = 4;
      alpha_constructor_year = in__.template read<
                                 Eigen::Matrix<local_scalar_t__, -1, -1>>(Y,
                                 C);
      Eigen::Matrix<local_scalar_t__, -1, 1> theta =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N, DUMMY_VAR__);
      current_statement__ = 7;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 6;
        stan::model::assign(theta,
          stan::math::inv_logit(
            (((stan::model::rvalue(alpha_driver, "alpha_driver",
                 stan::model::index_uni(stan::model::rvalue(driver, "driver",
                                          stan::model::index_uni(i)))) +
                stan::model::rvalue(alpha_constructor, "alpha_constructor",
                  stan::model::index_uni(stan::model::rvalue(constructor,
                                           "constructor",
                                           stan::model::index_uni(i))))) +
               stan::model::rvalue(alpha_driver_year, "alpha_driver_year",
                 stan::model::index_uni(stan::model::rvalue(year, "year",
                                          stan::model::index_uni(i))),
                   stan::model::index_uni(stan::model::rvalue(driver,
                                            "driver",
                                            stan::model::index_uni(i))))) +
              stan::model::rvalue(alpha_constructor_year,
                "alpha_constructor_year",
                stan::model::index_uni(stan::model::rvalue(year, "year",
                                         stan::model::index_uni(i))),
                  stan::model::index_uni(stan::model::rvalue(constructor,
                                           "constructor",
                                           stan::model::index_uni(i)))))),
          "assigning variable theta", stan::model::index_uni(i));
      }
      {
        current_statement__ = 14;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(alpha_driver, 0, 0.75));
        current_statement__ = 15;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(alpha_constructor, 0, 0.75));
        current_statement__ = 16;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(
            stan::math::to_vector(alpha_driver_year), 0, 0.75));
        current_statement__ = 17;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(
            stan::math::to_vector(alpha_constructor_year), 0, 0.75));
        current_statement__ = 18;
        lp_accum__.add(
          stan::math::binomial_lpmf<propto__>(position, 19, theta));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "model_2_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<double, -1, 1> alpha_driver =
         Eigen::Matrix<double, -1, 1>::Constant(D,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      alpha_driver = in__.template read<
                       Eigen::Matrix<local_scalar_t__, -1, 1>>(D);
      Eigen::Matrix<double, -1, 1> alpha_constructor =
         Eigen::Matrix<double, -1, 1>::Constant(C,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      alpha_constructor = in__.template read<
                            Eigen::Matrix<local_scalar_t__, -1, 1>>(C);
      Eigen::Matrix<double, -1, -1> alpha_driver_year =
         Eigen::Matrix<double, -1, -1>::Constant(Y, D,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 3;
      alpha_driver_year = in__.template read<
                            Eigen::Matrix<local_scalar_t__, -1, -1>>(Y, D);
      Eigen::Matrix<double, -1, -1> alpha_constructor_year =
         Eigen::Matrix<double, -1, -1>::Constant(Y, C,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 4;
      alpha_constructor_year = in__.template read<
                                 Eigen::Matrix<local_scalar_t__, -1, -1>>(Y,
                                 C);
      Eigen::Matrix<double, -1, 1> theta =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha_driver);
      out__.write(alpha_constructor);
      out__.write(alpha_driver_year);
      out__.write(alpha_constructor_year);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 7;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 6;
        stan::model::assign(theta,
          stan::math::inv_logit(
            (((stan::model::rvalue(alpha_driver, "alpha_driver",
                 stan::model::index_uni(stan::model::rvalue(driver, "driver",
                                          stan::model::index_uni(i)))) +
                stan::model::rvalue(alpha_constructor, "alpha_constructor",
                  stan::model::index_uni(stan::model::rvalue(constructor,
                                           "constructor",
                                           stan::model::index_uni(i))))) +
               stan::model::rvalue(alpha_driver_year, "alpha_driver_year",
                 stan::model::index_uni(stan::model::rvalue(year, "year",
                                          stan::model::index_uni(i))),
                   stan::model::index_uni(stan::model::rvalue(driver,
                                            "driver",
                                            stan::model::index_uni(i))))) +
              stan::model::rvalue(alpha_constructor_year,
                "alpha_constructor_year",
                stan::model::index_uni(stan::model::rvalue(year, "year",
                                         stan::model::index_uni(i))),
                  stan::model::index_uni(stan::model::rvalue(constructor,
                                           "constructor",
                                           stan::model::index_uni(i)))))),
          "assigning variable theta", stan::model::index_uni(i));
      }
      if (emit_transformed_parameters__) {
        out__.write(theta);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> log_lik =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double, -1, 1> y_hat =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 13;
      for (int j = 1; j <= N; ++j) {
        current_statement__ = 10;
        stan::model::assign(log_lik,
          stan::math::binomial_lpmf<false>(
            stan::model::rvalue(position, "position",
              stan::model::index_uni(j)), 19,
            stan::model::rvalue(theta, "theta", stan::model::index_uni(j))),
          "assigning variable log_lik", stan::model::index_uni(j));
        current_statement__ = 11;
        stan::model::assign(y_hat,
          stan::math::binomial_rng(19,
            stan::model::rvalue(theta, "theta", stan::model::index_uni(j)),
            base_rng__),
          "assigning variable y_hat", stan::model::index_uni(j));
      }
      out__.write(log_lik);
      out__.write(y_hat);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__, -1, 1> alpha_driver =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(D, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
        stan::model::assign(alpha_driver, in__.read<local_scalar_t__>(),
          "assigning variable alpha_driver", stan::model::index_uni(sym1__));
      }
      out__.write(alpha_driver);
      Eigen::Matrix<local_scalar_t__, -1, 1> alpha_constructor =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(C, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        stan::model::assign(alpha_constructor, in__.read<local_scalar_t__>(),
          "assigning variable alpha_constructor", stan::model::index_uni(sym1__));
      }
      out__.write(alpha_constructor);
      Eigen::Matrix<local_scalar_t__, -1, -1> alpha_driver_year =
         Eigen::Matrix<local_scalar_t__, -1, -1>::Constant(Y, D, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          stan::model::assign(alpha_driver_year,
            in__.read<local_scalar_t__>(),
            "assigning variable alpha_driver_year", stan::model::index_uni(sym2__),
                                                      stan::model::index_uni(sym1__));
        }
      }
      out__.write(alpha_driver_year);
      Eigen::Matrix<local_scalar_t__, -1, -1> alpha_constructor_year =
         Eigen::Matrix<local_scalar_t__, -1, -1>::Constant(Y, C, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          stan::model::assign(alpha_constructor_year,
            in__.read<local_scalar_t__>(),
            "assigning variable alpha_constructor_year", stan::model::index_uni(sym2__),
                                                           stan::model::index_uni(sym1__));
        }
      }
      out__.write(alpha_constructor_year);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha_driver", "alpha_constructor",
      "alpha_driver_year", "alpha_constructor_year", "theta", "log_lik",
      "y_hat"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(D)
                                                                   },
      std::vector<size_t>{static_cast<size_t>(C)},
      std::vector<size_t>{static_cast<size_t>(Y), static_cast<size_t>(D)},
      std::vector<size_t>{static_cast<size_t>(Y), static_cast<size_t>(C)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alpha_driver" + '.' + std::to_string(sym1__));
      } 
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alpha_constructor" + '.' + std::to_string(sym1__));
      } 
    }
    for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "alpha_driver_year" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          } 
        }
      } 
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "alpha_constructor_year" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          } 
        }
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "theta" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alpha_driver" + '.' + std::to_string(sym1__));
      } 
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "alpha_constructor" + '.' + std::to_string(sym1__));
      } 
    }
    for (int sym1__ = 1; sym1__ <= D; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "alpha_driver_year" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          } 
        }
      } 
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= Y; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "alpha_constructor_year" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          } 
        }
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "theta" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha_driver\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(D) + "},\"block\":\"parameters\"},{\"name\":\"alpha_constructor\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"alpha_driver_year\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(Y) + ",\"cols\":" + std::to_string(D) + "},\"block\":\"parameters\"},{\"name\":\"alpha_constructor_year\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(Y) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha_driver\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(D) + "},\"block\":\"parameters\"},{\"name\":\"alpha_constructor\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"alpha_driver_year\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(Y) + ",\"cols\":" + std::to_string(D) + "},\"block\":\"parameters\"},{\"name\":\"alpha_constructor_year\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(Y) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (((D + C) + (Y * D)) + (Y * C));
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (((D + C) + (Y * D)) + (Y * C));
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 4> names__{"alpha_driver",
      "alpha_constructor", "alpha_driver_year", "alpha_constructor_year"};
      const std::array<Eigen::Index, 4> constrain_param_sizes__{D, C, 
       (Y * D), (Y * C)};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = model_2_model_namespace::model_2_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return model_2_model_namespace::profiles__;
}

#endif


