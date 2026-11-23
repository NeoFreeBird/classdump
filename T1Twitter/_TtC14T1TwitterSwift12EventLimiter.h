//
#ifndef _TtC14T1TwitterSwift12EventLimiter_h
#define _TtC14T1TwitterSwift12EventLimiter_h
@import Foundation;

@class DispatchQueue, Swift.Bool, T1TwitterSwift.EventLimiterConfig, _$s17TFSUtilitiesSwift5QueueCMn T1TwitterSwift.EventLimiter.Event, _$s8Dispatch0A4TimeVMn, _$sSi, _TtCs12_SwiftObject;

@interface T1TwitterSwift.EventLimiter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.EventLimiterConfig config;
    nominal type descriptor for Dispatch.DispatchTime lastResetTime;
    Swift.Int eventsHandledSinceReset;
    nominal type descriptor for TFSUtilitiesSwift.Queue T1TwitterSwift.EventLimiter.Event eventQueue;
    Swift.Bool isHandlingScheduled;
    DispatchQueue dispatchQueue;
}

@end

#endif /* _TtC14T1TwitterSwift12EventLimiter_h */
