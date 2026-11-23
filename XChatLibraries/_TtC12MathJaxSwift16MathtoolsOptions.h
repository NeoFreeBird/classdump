//
#ifndef _TtC12MathJaxSwift16MathtoolsOptions_h
#define _TtC12MathJaxSwift16MathtoolsOptions_h
@import Foundation;

#include "_TtP12MathJaxSwift23MathtoolsOptionsExports_-Protocol.h"

@class NSDictionary, NSObject, NSString, Swift.Bool, _$sSDySSSaySSGG, _$sSS;

@interface MathJaxSwift.MathtoolsOptions : NSObject <MathJaxSwift.MathtoolsOptionsExports> // (Swift)

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

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift16MathtoolsOptions_h */
