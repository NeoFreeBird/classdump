//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP12MarkdownView18SafeOptionsExports__Protocol_h
#define _TtP12MarkdownView18SafeOptionsExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"
#include "_TtC12MarkdownView10SafeStyles.h"
#include "_TtC12MarkdownView12AllowOptions.h"
#include "_TtC12MarkdownView13SafeProtocols.h"

@class NSArray, NSString;

@protocol MarkdownView.SafeOptionsExports <JSExport>

@required

@property (nonatomic) long long lengthMax;
@property (nonatomic, copy) NSArray *scriptsizemultiplierRange;
@property (nonatomic, copy) NSArray *scriptlevelRange;
@property (nonatomic, copy) NSString *classPattern;
@property (nonatomic, copy) NSString *idPattern;
@property (nonatomic, copy) NSString *dataPattern;
@property (nonatomic, retain) MarkdownView.AllowOptions *allowOptions;
@property (nonatomic, retain) MarkdownView.SafeProtocols *safeProtocols;
@property (nonatomic, retain) MarkdownView.SafeStyles *safeStyles;

@optional

@end

#endif /* _TtP12MarkdownView18SafeOptionsExports__Protocol_h */
