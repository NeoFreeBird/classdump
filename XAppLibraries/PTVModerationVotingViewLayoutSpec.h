//
#ifndef PTVModerationVotingViewLayoutSpec_h
#define PTVModerationVotingViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVModerationVotingViewLayoutSpec : NSObject

/* class methods */
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })InstructionsAndStatusLabelOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })MessageContainerOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TimedOutLabelOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })MessageOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })DividingLineOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })VotingButtonOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })VotingButtonLabelOuterPadding;
+ (double)LineSpacingForVerdictMessage;
+ (id)InstructionsAndWaitingFont;
+ (id)MessageFont;
+ (id)TimedOutFont;
+ (id)VotingButtonFont;
+ (id)VerdictFontDefault;
+ (id)VerdictFontBold;
+ (struct CGSize { double x0; double x1; })ModerationViewSizeThatFits:(struct CGSize { double x0; double x1; })fits VotingButtonHeight:(double)height MessageLabelHeight:(double)height MaxStatusLabelHeight:(double)height;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ModerationViewFrame:(struct CGSize { double x0; double x1; })frame VotingState:(long long)state ModerationDividingLineOriginY:(double)y ChatSectionDividingLineOriginY:(double)y ModerationViewSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ChatTableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame ModerationViewFrame:(struct CGSize { double x0; double x1; })frame VotingState:(long long)state ModerationDividingLineOriginY:(double)y ChatSectionDividingLineOriginY:(double)y ModerationWaitingLabelOriginY:(double)y ModerationViewSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)ModerationVerdictTableViewCellHeight:(unsigned long long)height TableViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)ModerationVerdictLocalizedDestructiveSubstring:(unsigned long long)substring;
+ (id)ModerationVerdictLocalizedString:(unsigned long long)string;
+ (id)ModerationVerdictAttributed:(unsigned long long)attributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ModerationVerdictLabelFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ModerationVerdictLabelHighlightFrameForVerdictType:(unsigned long long)type TableViewCellSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BoundingRectForDestructiveTitleInVerdict:(unsigned long long)verdict TableViewCellSize:(struct CGSize { double x0; double x1; })size;
+ (double)TopMaskWidthFromModerationViewWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TopMaskFrameWithVotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)InstructionsAttributed;
+ (id)WaitingAttributed;
+ (struct CGSize { double x0; double x1; })InstructionsAndStatusLabelSize:(id)size TopMaskViewWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })InstructionsAndStatusLabelFrame:(struct CGSize { double x0; double x1; })frame VotingState:(long long)state MessageSize:(struct CGSize { double x0; double x1; })size VotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)LearnMoreAttributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LearnMoreButtonFrame:(double)frame VotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)LearnMoreButtonHeight:(double)height LearnMoreAttributed:(id)attributed ModerationViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)MessageAttributed:(id)attributed;
+ (struct CGSize { double x0; double x1; })MessageSize:(id)size TopMaskViewWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AvatarFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageContainerFrame:(struct CGSize { double x0; double x1; })frame MessageVisible:(_Bool)visible VotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)DividingLineHeight;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DividingLineFrameWithVotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ProgressBarFrame:(double)frame VotingButtonHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)VotingButtonAttributed:(id)attributed;
+ (double)VotingButtonWidth:(double)width;
+ (double)VotingButtonHeight:(double)height;
+ (double)VotingButtonLabelHeight:(id)height ButtonWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })VotingButtonFrame:(long long)frame MaxVotingButtonLabelHeight:(double)height ModerationViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVModerationVotingViewLayoutSpec_h */
