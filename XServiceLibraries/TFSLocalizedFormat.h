//
#ifndef TFSLocalizedFormat_h
#define TFSLocalizedFormat_h
@import Foundation;

@class NSObject, NSString;

@interface TFSLocalizedFormat : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 boxed;
}

@property (nonatomic, readonly) NSString *string;

/* class methods */
+ (id)format:(id)format arguments:(id)arguments;

/* instance methods */
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(long long)index;
- (id)init;

@end

#endif /* TFSLocalizedFormat_h */
