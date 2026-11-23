//
#ifndef _TtC12MarkdownView24MMLInputProcessorOptions_h
#define _TtC12MarkdownView24MMLInputProcessorOptions_h
@import Foundation;

#include "_TtC12MarkdownView21InputProcessorOptions.h"
#include "_TtCC12MarkdownView24MMLInputProcessorOptions6Verify.h"
#include "_TtP12MarkdownView33MMLInputProcessorOptionsJSExports_-Protocol.h"

@class MarkdownView.MMLInputProcessorOptions.Verify, NSString, Swift.Bool, _$sSS, _$sySo7JSValueCSgXBSg;

@interface MarkdownView.MMLInputProcessorOptions : MarkdownView.InputProcessorOptions <MarkdownView.MMLInputProcessorOptionsJSExports> // (Swift)

@property (nonatomic, copy) NSString *parseAs;
@property (nonatomic) _Bool forceReparse;
@property (nonatomic, retain) id /* block */ parseError;
@property (nonatomic, retain) MarkdownView.MMLInputProcessorOptions.Verify *verify;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView24MMLInputProcessorOptions_h */
