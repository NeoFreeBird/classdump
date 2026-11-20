//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP12MarkdownView17SREOptionsExports__Protocol_h
#define _TtP12MarkdownView17SREOptionsExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"

@class NSString, NSURL;

@protocol MarkdownView.SREOptionsExports <JSExport>

@required

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *style;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *subiso;
@property (nonatomic, copy) NSString *markup;
@property (nonatomic, copy) NSString *modality;
@property (nonatomic, copy) NSString *speech;
@property (nonatomic) _Bool pprint;
@property (nonatomic, copy) NSString *structure;
@property (nonatomic, copy) NSURL *json;
@property (nonatomic, copy) NSURL *xpath;
@property (nonatomic) double rate;
@property (nonatomic) _Bool strict;
@property (nonatomic, copy) NSString *mode;

@optional

@end

#endif /* _TtP12MarkdownView17SREOptionsExports__Protocol_h */
