//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
