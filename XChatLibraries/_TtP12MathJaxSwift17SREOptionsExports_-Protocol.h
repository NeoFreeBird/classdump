//
#ifndef _TtP12MathJaxSwift17SREOptionsExports__Protocol_h
#define _TtP12MathJaxSwift17SREOptionsExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"

@class NSString, NSURL;

@protocol MathJaxSwift.SREOptionsExports <JSExport>

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

#endif /* _TtP12MathJaxSwift17SREOptionsExports__Protocol_h */
