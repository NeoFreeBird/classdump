//
#ifndef PTVTypingLetterAnimator_h
#define PTVTypingLetterAnimator_h
@import Foundation;

@class NSArray, NSObject, UIView;

@interface PTVTypingLetterAnimator : NSObject

@property (retain, nonatomic) NSArray *letters;
@property (nonatomic) long long typingAnimationCounter;
@property (retain, nonatomic) UIView *superview;
@property (nonatomic) _Bool isTvOS;
@property (nonatomic) long long participantIndex;

/* instance methods */
- (id)initWithSuperview:(id)superview;
- (void)animateTypingLetterLayer;
- (void)animateTypingLetterLayer:(id)layer completionBlock:(id /* block */)block;
- (id)letter;
- (id)createTypingLetterLayer;

@end

#endif /* PTVTypingLetterAnimator_h */
