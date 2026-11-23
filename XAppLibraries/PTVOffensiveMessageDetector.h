//
#ifndef PTVOffensiveMessageDetector_h
#define PTVOffensiveMessageDetector_h
@import Foundation;

@class NSObject;

@interface PTVOffensiveMessageDetector : NSObject

/* class methods */
+ (_Bool)IsStringOffensive:(id)offensive WithinOffensivePhrases:(id)phrases;
+ (_Bool)IsStringOffensive:(id)offensive;
+ (void)StoreOffensivePhrases:(id)phrases;
+ (id)OffensivePhrases;

@end

#endif /* PTVOffensiveMessageDetector_h */
