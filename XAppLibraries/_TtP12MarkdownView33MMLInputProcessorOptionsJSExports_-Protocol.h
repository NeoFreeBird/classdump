//
#ifndef _TtP12MarkdownView33MMLInputProcessorOptionsJSExports__Protocol_h
#define _TtP12MarkdownView33MMLInputProcessorOptionsJSExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"
#include "_TtCC12MarkdownView24MMLInputProcessorOptions6Verify.h"

@class NSString;

@protocol MarkdownView.MMLInputProcessorOptionsJSExports <JSExport>

@required

@property (nonatomic, copy) NSString *parseAs;
@property (nonatomic) _Bool forceReparse;
@property (nonatomic, retain) id /* block */ parseError;
@property (nonatomic, retain) MarkdownView.MMLInputProcessorOptions.Verify *verify;

@optional

@end

#endif /* _TtP12MarkdownView33MMLInputProcessorOptionsJSExports__Protocol_h */
