#include "../DuckLink.h"

void DuckLink::setupWithDefaults() {
    Duck::setupWithDefaults();
    setupRadio();
}

int DuckLink::run() {
  handleOtaUpdate();
  processPortalRequest();
  return 0;
}
