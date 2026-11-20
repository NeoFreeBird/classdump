//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12MarkdownView12AMSCDOptions_h
#define _TtC12MarkdownView12AMSCDOptions_h
@import Foundation;

#include "_TtP12MarkdownView19AMSCDOptionsExports_-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSS;

@interface MarkdownView.AMSCDOptions : NSObject <MarkdownView.AMSCDOptionsExports> // (Swift)

@property (nonatomic, copy) NSString *colspace;
@property (nonatomic, copy) NSString *rowspace;
@property (nonatomic, copy) NSString *harrowsize;
@property (nonatomic, copy) NSString *varrowsize;
@property (nonatomic) _Bool hideHorizontalLabels;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView12AMSCDOptions_h */
