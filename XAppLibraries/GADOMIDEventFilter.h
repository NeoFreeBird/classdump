//
#ifndef GADOMIDEventFilter_h
#define GADOMIDEventFilter_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADOMIDEventFilter : NSObject {
    /* instance variables */
    unsigned long long _codes;
    unsigned long long _finalEventCode;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (readonly, nonatomic) _Bool finalEventAccepted;

/* instance methods */
- (id)initWithFinalEventCode:(unsigned long long)code;
- (_Bool)isFinalEventAccepted;
- (_Bool)acceptEventWithCode:(unsigned long long)code;
- (_Bool)acceptEventWithCode:(unsigned long long)code blockingEventCodes:(unsigned long long)codes;
- (_Bool)acceptAnyEventWithRequiredEventCodes:(unsigned long long)codes;

@end

#endif /* GADOMIDEventFilter_h */
