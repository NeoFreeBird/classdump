//
#ifndef GADOMIDScriptInjector_h
#define GADOMIDScriptInjector_h
@import Foundation;

@class NSObject;

@interface GADOMIDScriptInjector : NSObject

/* class methods */
+ (id)injectScriptContent:(id)content intoHTML:(id)html error:(id *)error;
+ (id)stringFromHtml:(id)html byInsertingScript:(id)script;
+ (unsigned long long)indexForScriptInHtml:(id)html;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })replaceSelfClosingTagInHtml:(id)html tagRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)tagFromHtml:(id)html inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)commentsInHtml:(id)html;

@end

#endif /* GADOMIDScriptInjector_h */
