//
#ifndef T1AddKeywordDurationItem_h
#define T1AddKeywordDurationItem_h
@import Foundation;

@class TFNLegacyFormCustomItem;

@interface T1AddKeywordDurationItem : TFNLegacyFormCustomItem

@property (nonatomic) double originalDuration;
@property (nonatomic) double duration;

/* instance methods */
- (void)private_updateDetailText;

@end

#endif /* T1AddKeywordDurationItem_h */
