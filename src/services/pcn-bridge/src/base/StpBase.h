/**
 * bridge API generated from bridge.yang
 *
 * NOTE: This file is auto generated by polycube-codegen
 * https://github.com/polycube-network/polycube-codegen
 */

/* Do not edit this file manually */

/*
 * StpBase.h
 *
 *
 */

#pragma once

#include "../serializer/StpJsonObject.h"

#include <spdlog/spdlog.h>

using namespace polycube::service::model;

class Bridge;

class StpBase {
 public:
  StpBase(Bridge &parent);

  virtual ~StpBase();
  virtual void update(const StpJsonObject &conf);
  virtual StpJsonObject toJsonObject();

  /// <summary>
  /// VLAN identifier for this entry
  /// </summary>
  virtual uint16_t getVlan() = 0;

  /// <summary>
  /// Bridge priority for STP
  /// </summary>
  virtual uint16_t getPriority() = 0;
  virtual void setPriority(const uint16_t &value) = 0;

  /// <summary>
  /// Delay used by STP bridges for port state transition
  /// </summary>
  virtual uint32_t getForwardDelay() = 0;
  virtual void setForwardDelay(const uint32_t &value) = 0;

  /// <summary>
  /// Interval between transmissions of BPDU messages
  /// </summary>
  virtual uint32_t getHelloTime() = 0;
  virtual void setHelloTime(const uint32_t &value) = 0;

  /// <summary>
  /// Maximum age of a BPDU
  /// </summary>
  virtual uint32_t getMaxMessageAge() = 0;
  virtual void setMaxMessageAge(const uint32_t &value) = 0;

  std::shared_ptr<spdlog::logger> logger();

 protected:
  Bridge &parent_;
};