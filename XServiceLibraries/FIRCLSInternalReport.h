//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSInternalReport_h
#define FIRCLSInternalReport_h
@import Foundation;

@class NSArray, NSDate, NSDictionary, NSObject, NSString;

@interface FIRCLSInternalReport : NSObject {
    /* instance variables */
    NSArray *_metadataSections;
}

@property (readonly, copy, nonatomic) NSString *directoryName;
@property (copy, nonatomic) NSString *path;
@property (readonly, nonatomic) _Bool hasAnyEvents;
@property (readonly, copy, nonatomic) NSString *binaryImagePath;
@property (readonly, copy, nonatomic) NSString *metadataPath;
@property (readonly, copy, nonatomic) NSString *orgID;
@property (readonly, copy, nonatomic) NSString *installID;
@property (readonly, nonatomic) _Bool isCrash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *customKeys;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *bundleShortVersionString;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSDate *crashedOnDate;
@property (readonly, copy, nonatomic) NSString *OSVersion;
@property (readonly, copy, nonatomic) NSString *OSBuildVersion;

/* class methods */
+ (id)reportWithPath:(id)path;
+ (id)crashFileNames;
+ (id)readFIRCLSFileAtPath:(id)path;

/* instance methods */
- (id)initWithPath:(id)path executionIdentifier:(id)identifier;
- (id)initWithPath:(id)path;
- (id)pathForContentFile:(id)file;
- (_Bool)checkExistenceOfAtLeastOneFileInArray:(id)array;
- (void)enumerateSymbolicatableFilesInContent:(id /* block */)content;
- (id)metadataSections;
- (id)timeFromCrashContentFile:(id)file sectionName:(id)name;

@end

#endif /* FIRCLSInternalReport_h */
