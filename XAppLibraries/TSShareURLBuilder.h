//
#ifndef TSShareURLBuilder_h
#define TSShareURLBuilder_h
@import Foundation;

@class NSObject;

@interface TSShareURLBuilder : NSObject // (Swift)

/* class methods */
+ (id)URLString:(id)urlstring byAppendingSParam:(unsigned long long)sparam;
+ (id)URLString:(id)urlstring byAppendingSessionToken:(id)token;

/* instance methods */
- (id)init;

@end

#endif /* TSShareURLBuilder_h */
