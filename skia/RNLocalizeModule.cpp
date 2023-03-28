/*
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include <cxxreact/JsArgumentHelpers.h>

#include "RNLocalizeModule.h"

using namespace folly;
namespace facebook {
namespace xplat {

RNLocalizeModule::RNLocalizeModule() { }

std::map<std::string, folly::dynamic> RNLocalizeModule::getConstants() {
  folly::dynamic settingsObj = folly::dynamic::object;
  settingsObj["languageCode"]= string("en");
  settingsObj["calendar"] = string("gregorian");
  settingsObj["country"] = string("BR");
  settingsObj["currencies"] = string("BRL");
  settingsObj["locales"] = string("en-us");
  settingsObj["numberFormatSettings"] = string("en");
  settingsObj["temperatureUnit"] = string("celsius");
  settingsObj["timeZone"] = string("America/Sao_Paulo");
  settingsObj["uses24HourClock"] = string("en");
  settingsObj["usesMetricSystem"] = string("en");
  settingsObj["usesAutoDateAndTime"] = string("en");
  settingsObj["usesAutoTimeZone"] = string("en");

  return {{"initialConstants", settingsObj}};
}

std::string RNLocalizeModule::getName() {
  return "RNLocalize";
}

auto RNLocalizeModule::getMethods() -> std::vector<Method> {
    return {
    Method(
    "addListener",
    [&] (dynamic args){
      RNS_LOG_NOT_IMPL;
      return ;
      }),
    Method(
    "removeListener",
    [&] (dynamic args){
      RNS_LOG_NOT_IMPL;
      return ;
      }),
 };
}

#ifdef __cplusplus
extern "C" {
#endif
RNS_EXPORT_MODULE(RNLocalize)
#ifdef __cplusplus
}
#endif

} // xplat
} // facebook
