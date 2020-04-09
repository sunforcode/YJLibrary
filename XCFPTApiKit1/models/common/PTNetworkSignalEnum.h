// apic_version = 0.6.1
@import Foundation;
#ifndef PTNetworkSignalEnum_h
#define PTNetworkSignalEnum_h
typedef NS_ENUM(NSUInteger, PTNetworkSignalEnum){
    PTNetworkSignalEnumERROR_SIGNAL = 0,
    PTNetworkSignalEnumUNKNOWN_ETHERNET = 1,
    PTNetworkSignalEnumWIFI = 2,
    PTNetworkSignalEnumUNKNOWN_CELLULAR = 3,
    PTNetworkSignalEnumSECOND_G = 4,
    PTNetworkSignalEnumTHIRD_G = 5,
    PTNetworkSignalEnumFOURTH_G = 6,
};
#endif
