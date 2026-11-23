//
#ifndef TFSCardNameMapping_h
#define TFSCardNameMapping_h
@import Foundation;

@class NSObject;

@interface TFSCardNameMapping : NSObject // (Swift)

/* class methods */
+ (id)forCase:(long long)_case;
+ (id)forCardNameString:(id)string;

/* instance methods */
- (id)init;

@end

#endif /* TFSCardNameMapping_h */
