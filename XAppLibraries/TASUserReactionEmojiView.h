//
#ifndef TASUserReactionEmojiView_h
#define TASUserReactionEmojiView_h
@import Foundation;

@class CALayer, NSMutableArray, NSString, UIView;

@interface TASUserReactionEmojiView : UIView

@property (retain, nonatomic) CALayer *stickyEmojiLayer;
@property (retain, nonatomic) NSMutableArray *reactionEmojiLayers;
@property (copy, nonatomic) NSString *stickyEmoji;

/* instance methods */
- (void)setStickyEmoji:(id)emoji animated:(_Bool)animated;
- (void)presentReactionEmoji:(id)emoji;
- (void)hideReactionEmoji;
- (id)_addLayerWithEmoji:(id)emoji animated:(_Bool)animated;
- (void)_removeEmojiLayer:(id)layer animated:(_Bool)animated;
- (void)_addAndRemoveAnimatedLayerWithEmoji:(id)emoji;

@end

#endif /* TASUserReactionEmojiView_h */
