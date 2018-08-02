// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

namespace Service::SM {
class ServiceManager;
}

namespace Service::NCM {

void InstallInterfaces(SM::ServiceManager& sm);

} // namespace Service::NCM