//
#ifndef _TtC12MarkdownView22OutputProcessorOptions_h
#define _TtC12MarkdownView22OutputProcessorOptions_h
@import Foundation;

@class NSDictionary, NSObject, NSString, Swift.Bool, _$sSDySSSbG, _$sSS, _$sSd;

@interface MarkdownView.OutputProcessorOptions : NSObject // (Swift)

@property (nonatomic) double scale;
@property (nonatomic) double minScale;
@property (nonatomic) _Bool mtextInheritFont;
@property (nonatomic) _Bool merrorInheritFont;
@property (nonatomic, copy) NSString *mtextFont;
@property (nonatomic, copy) NSString *merrorFont;
@property (nonatomic, copy) NSString *unknownFamily;
@property (nonatomic) _Bool mathmlSpacing;
@property (nonatomic, copy) NSDictionary *skipAttributes;
@property (nonatomic) double exFactor;
@property (nonatomic, copy) NSString *displayAlign;
@property (nonatomic) double displayIndent;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView22OutputProcessorOptions_h */
