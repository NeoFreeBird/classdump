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
