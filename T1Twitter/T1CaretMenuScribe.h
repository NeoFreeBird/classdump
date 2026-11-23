//
#ifndef T1CaretMenuScribe_h
#define T1CaretMenuScribe_h
@import Foundation;

@class NSObject;

@interface T1CaretMenuScribe : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *page;
    NSNumber"16@0:8 *section;
    NSNumber"16@0:8 *parameters;
}

/* class methods */
+ (void)instrumentLegacyMenuSheet:(id)sheet statusViewModel:(id)model account:(id)account controller:(id)controller scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1CaretMenuScribe_h */
