/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_BullsPower_Params_H8 : BullsPowerParams {
  Indi_BullsPower_Params_H8() : BullsPowerParams(indi_bulls_defaults, PERIOD_H8) {
    applied_price = (ENUM_APPLIED_PRICE)0;
    period = 14;
    shift = 0;
  }
} indi_bulls_h8;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct stg_bulls_Params_H8 : StgParams {
  // Struct constructor.
  stg_bulls_Params_H8() : StgParams(stg_bulls_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = (float)0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = (float)0;
    price_stop_method = 0;
    price_stop_level = (float)2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_bulls_h8;
