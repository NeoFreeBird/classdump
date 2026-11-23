//
#ifndef _TtP12MathJaxSwift22DocumentOptionsExports__Protocol_h
#define _TtP12MathJaxSwift22DocumentOptionsExports__Protocol_h
@import Foundation;

#include "JSExport-Protocol.h"
#include "_TtC12MathJaxSwift10SREOptions.h"
#include "_TtC12MathJaxSwift11A11YOptions.h"
#include "_TtC12MathJaxSwift11MenuOptions.h"
#include "_TtC12MathJaxSwift11SafeOptions.h"

@class NSArray, NSDictionary, NSString;

@protocol MathJaxSwift.DocumentOptionsExports <JSExport>

@required

@property (nonatomic, copy) NSArray *skipHtmlTags;
@property (nonatomic, copy) NSDictionary *includeHtmlTags;
@property (nonatomic, copy) NSString *ignoreHtmlClass;
@property (nonatomic, copy) NSString *processHtmlClass;
@property (nonatomic) _Bool enableEnrichment;
@property (nonatomic) _Bool enableComplexity;
@property (nonatomic) _Bool makeCollapsible;
@property (nonatomic) _Bool identifyCollapsible;
@property (nonatomic) _Bool enableExplorer;
@property (nonatomic) _Bool enableAssistiveMml;
@property (nonatomic) _Bool enableMenu;
@property (nonatomic, copy) NSDictionary *annotationTypes;
@property (nonatomic, retain) MathJaxSwift.A11YOptions *a11y;
@property (nonatomic, retain) MathJaxSwift.SREOptions *sre;
@property (nonatomic, retain) MathJaxSwift.MenuOptions *menuOptions;
@property (nonatomic, retain) MathJaxSwift.SafeOptions *safeOptions;
@property (nonatomic, retain) id /* block */ enrichError;
@property (nonatomic, retain) id /* block */ compileError;
@property (nonatomic, retain) id /* block */ typesetError;

@optional

@end

#endif /* _TtP12MathJaxSwift22DocumentOptionsExports__Protocol_h */
