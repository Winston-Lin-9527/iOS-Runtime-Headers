/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSDictionary, NSDate, NSURLSession, NSObject;

@interface CPLConfiguration : NSObject {

	NSURL* _configurationFileURL;
	NSDictionary* _configuration;
	NSDate* _lastUpdate;
	double _updateInterval;
	NSURLSession* _currentSession;
	NSObject*<OS_dispatch_queue> _lock;

}
+(void)disableConfigurationFetching;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)_load;
-(double)_updateInterval;
-(void)_save;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)_setContents:(id)arg1 ;
-(void)refetchFromDisk;
-(void)check;
@end
