//
#ifndef _TtP12MarkdownView23MathtoolsOptionsExports__Protocol_h
#define _TtP12MarkdownView23MathtoolsOptionsExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"

@class NSDictionary, NSString;

@protocol MarkdownView.MathtoolsOptionsExports <JSExport>

@required

@property (nonatomic, copy) NSString *multlinegap;
@property (nonatomic, copy) NSString *multlinedPos;
@property (nonatomic, copy) NSString *firstlineAfterskip;
@property (nonatomic, copy) NSString *lastlinePreskip;
@property (nonatomic, copy) NSString *smallmatrixAlign;
@property (nonatomic, copy) NSString *shortvdotsadjustabove;
@property (nonatomic, copy) NSString *shortvdotsadjustbelow;
@property (nonatomic) _Bool centercolon;
@property (nonatomic, copy) NSString *centercolonOffset;
@property (nonatomic, copy) NSString *thincolonDx;
@property (nonatomic, copy) NSString *thincolonDw;
@property (nonatomic) _Bool useUnicode;
@property (nonatomic, copy) NSString *prescriptSubFormat;
@property (nonatomic, copy) NSString *prescriptSupFormat;
@property (nonatomic, copy) NSString *prescriptArgFormat;
@property (nonatomic) _Bool allowMathtoolsset;
@property (nonatomic, copy) NSDictionary *pairedDelimiters;
@property (nonatomic, copy) NSDictionary *tagforms;

@optional

@end

#endif /* _TtP12MarkdownView23MathtoolsOptionsExports__Protocol_h */
