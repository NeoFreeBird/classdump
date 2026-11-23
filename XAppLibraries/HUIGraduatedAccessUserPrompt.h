//
#ifndef HUIGraduatedAccessUserPrompt_h
#define HUIGraduatedAccessUserPrompt_h
@import Foundation;

@class NSObject;

@interface HUIGraduatedAccessUserPrompt : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 hasGraduatedAccess;
    @40@0:8:16@24@32 dataSource;
}

/* class methods */
+ (void)presentIfNeededFrom:(id)from account:(id)account completion:(id /* block */)completion;
+ (void)presentIfNeededFrom:(id)from account:(id)account delegate:(id)delegate completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* HUIGraduatedAccessUserPrompt_h */
