//
#ifndef _TtC12MarkdownView23AMInputProcessorOptions_h
#define _TtC12MarkdownView23AMInputProcessorOptions_h
@import Foundation;

#include "_TtC12MarkdownView21InputProcessorOptions.h"
#include "_TtP12MarkdownView32AMInputProcessorOptionsJSExports_-Protocol.h"

@class NSString, Swift.Bool, _$sSS;

@interface MarkdownView.AMInputProcessorOptions : MarkdownView.InputProcessorOptions <MarkdownView.AMInputProcessorOptionsJSExports> // (Swift)

@property (nonatomic) _Bool fixphi;
@property (nonatomic) _Bool displaystyle;
@property (nonatomic, copy) NSString *decimalsign;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView23AMInputProcessorOptions_h */
