//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterProfileModules12JobViewModel_h
#define _TtC21TwitterProfileModules12JobViewModel_h
@import Foundation;

@class NSObject, _$sSS, _$sSSSg, _$sSo17NSNumberFormatterC, _$sSo24TFNTwitterUserDataSourceCSg, _$ss5Int16VMn ?;

@interface TwitterProfileModules.JobViewModel : NSObject { // (Swift)
    /* instance variables */
    Swift.String id;
    Swift.String title;
    Swift.String location;
    Swift.String externalUrl;
    Swift.String? formattedSalary;
    nominal type descriptor for Swift.Int16 ? salaryInterval;
    __C.TFNTwitterUserDataSource? userDataSource;
    __C.NSNumberFormatter currencyFormatter;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterProfileModules12JobViewModel_h */
