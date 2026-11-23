//
#ifndef T1URTRichTextRenderer_h
#define T1URTRichTextRenderer_h
@import Foundation;

@class NSObject;

@interface T1URTRichTextRenderer : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *fontGroup;
    NSNumber"16@0:8 *textColor;
    NSNumber"16@0:8 *lineHeight;
    NSNumber"16@0:8 *paragraphSpacing;
    NSNumber"16@0:8 *alignment;
    NSNumber"16@0:8 *textRTLDetector;
    NSNumber"16@0:8 *entityRenderers;
}

/* class methods */
+ (id)inlinePromptTextRenderer;
+ (id)conversationControlEducationRendererWithParagraphSpacing:(double)spacing;
+ (id)headsUpRichTextRendererWithParagraphSpacing:(double)spacing;

/* instance methods */
- (id)attributedStringFor:(id)_for;
- (id)init;

@end

#endif /* T1URTRichTextRenderer_h */
