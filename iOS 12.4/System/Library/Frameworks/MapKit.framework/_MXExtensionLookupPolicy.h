/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MXExtensionLookupPolicy.h>

@protocol _MXExtensionLookupPolicy <NSObject>
@required
-(id)extensionPredicate;

@end


@class NSPredicate, NSString;

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy> {

	NSPredicate* _extensionPredicate;

}

@property (nonatomic,retain) NSPredicate * extensionPredicate;              //@synthesize extensionPredicate=_extensionPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSPredicate *)extensionPredicate;
-(id)initWithPredicate:(id)arg1 ;
-(void)setExtensionPredicate:(NSPredicate *)arg1 ;
@end
