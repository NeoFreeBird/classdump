//
#ifndef TFNLinkTextAttributeProperties_h
#define TFNLinkTextAttributeProperties_h
@import Foundation;

@class NSObject;

@interface TFNLinkTextAttributeProperties : NSObject

@property (nonatomic) long long linkId;
@property (nonatomic) long long flavor;

/* instance methods */
- (id)initWithRangeFlavor:(long long)flavor linkId:(long long)id;
- (id)initWithRangeFlavor:(long long)flavor;

@end

#endif /* TFNLinkTextAttributeProperties_h */
