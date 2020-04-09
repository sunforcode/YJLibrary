// apic_version = 0.6.1
@import Foundation;
#ifndef PTLiveStatusEnum_h
#define PTLiveStatusEnum_h
typedef NS_ENUM(NSUInteger, PTLiveStatusEnum){
    PTLiveStatusEnumSTATUS_UNSPECIFIED = 0,
    PTLiveStatusEnumTO_LIVE = 1,
    PTLiveStatusEnumLIVE = 2,
    PTLiveStatusEnumLIVE_OFF = 3,
    PTLiveStatusEnumFINISH = 4,
    PTLiveStatusEnumDONE = 5,
    PTLiveStatusEnumUNKNOWN = 6,
};
#endif
