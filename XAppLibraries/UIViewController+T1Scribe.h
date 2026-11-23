//
#ifndef UIViewController_T1Scribe_h
#define UIViewController_T1Scribe_h
@import Foundation;

@interface UIViewController (T1Scribe)

/* instance methods */
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (id)scribe;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (id)scribeItemForIndexPath:(id)path;
- (id)scribeImpressionParametersForIndexPath:(id)path;
- (id)scribeContext;
- (id)scribeContextForIndexPath:(id)path;
- (id)scribePage;
- (id)scribePageForIndexPath:(id)path;
- (id)scribeSection;
- (id)scribeSectionForIndexPath:(id)path;
- (id)scribeComponent;
- (id)scribeComponentForIndexPath:(id)path;
- (id)scribeElement;
- (id)scribeElementForIndexPath:(id)path;
- (id)scribeAssociations;

@end

#endif /* UIViewController_T1Scribe_h */
