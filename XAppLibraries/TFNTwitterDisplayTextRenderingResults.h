//
#ifndef TFNTwitterDisplayTextRenderingResults_h
#define TFNTwitterDisplayTextRenderingResults_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFNTwitterDisplayTextRenderingResults : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long displayTextOffset;
@property (readonly, copy, nonatomic) NSArray *textRanges;
@property (readonly, copy, nonatomic) NSArray *hitHighlightRanges;
@property (readonly, copy, nonatomic) NSArray *richTextRanges;
@property (readonly, copy, nonatomic) NSArray *noteTweetInlineMediaRanges;

/* instance methods */
- (id)initWithText:(id)text displayTextOffset:(long long)offset textRanges:(id)ranges hitHighlightRanges:(id)ranges richTextRanges:(id)ranges noteTweetInlineMediaRanges:(id)ranges;

@end

#endif /* TFNTwitterDisplayTextRenderingResults_h */
