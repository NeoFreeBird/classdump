//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDestinationPresenterResult_h
#define TUCDestinationPresenterResult_h
@import Foundation;

@class NSNumber, NSObject;

@interface TUCDestinationPresenterResult : NSObject

@property (nonatomic) long long type;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSNumber *appOrStorePresentationResult;

/* class methods */
+ (id)failure;
+ (id)composer;
+ (id)viewController;
+ (id)appStoreResult:(unsigned long long)result duration:(double)duration;

/* instance methods */

@end

#endif /* TUCDestinationPresenterResult_h */
