//
#ifndef _TtP12MarkdownView34SVGOutputProcessorOptionsJSExports__Protocol_h
#define _TtP12MarkdownView34SVGOutputProcessorOptionsJSExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"

@class NSDictionary, NSString;

@protocol MarkdownView.SVGOutputProcessorOptionsJSExports <JSExport>

@required

@property (nonatomic, copy) NSString *fontCache;
@property (nonatomic) _Bool internalSpeechTitles;
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
@property (nonatomic, copy) NSString *localID;
@property (nonatomic) long long titleID;

@optional

@end

#endif /* _TtP12MarkdownView34SVGOutputProcessorOptionsJSExports__Protocol_h */
