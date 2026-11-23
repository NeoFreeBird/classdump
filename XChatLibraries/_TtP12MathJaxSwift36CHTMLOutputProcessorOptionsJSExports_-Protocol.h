//
#ifndef _TtP12MathJaxSwift36CHTMLOutputProcessorOptionsJSExports__Protocol_h
#define _TtP12MathJaxSwift36CHTMLOutputProcessorOptionsJSExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol MathJaxSwift.CHTMLOutputProcessorOptionsJSExports <JSExport>

@required

@property (nonatomic) _Bool matchFontHeight;
@property (nonatomic, copy) NSURL *fontURL;
@property (nonatomic) _Bool adaptiveCSS;
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

@optional

@end

#endif /* _TtP12MathJaxSwift36CHTMLOutputProcessorOptionsJSExports__Protocol_h */
