//
#ifndef GADOMIDAdSessionConfiguration_h
#define GADOMIDAdSessionConfiguration_h
@import Foundation;

@class NSObject;

@interface GADOMIDAdSessionConfiguration : NSObject

@property unsigned long long creativeType;
@property unsigned long long impressionType;
@property unsigned long long impressionOwner;
@property unsigned long long mediaEventsOwner;
@property _Bool isolateVerificationScripts;

/* instance methods */
- (id)initWithCreativeType:(unsigned long long)type impressionType:(unsigned long long)type impressionOwner:(unsigned long long)owner mediaEventsOwner:(unsigned long long)owner isolateVerificationScripts:(_Bool)scripts error:(id *)error;

@end

#endif /* GADOMIDAdSessionConfiguration_h */
