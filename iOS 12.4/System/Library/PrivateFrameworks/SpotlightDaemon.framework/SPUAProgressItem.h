/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPUAProgressItem : NSObject {

	unsigned _expectedCount;
	unsigned _completeCount;
	unsigned _errorCount;
	unsigned _deleteCount;
	NSString* _bundleID;
	NSString* _uaID;
	NSString* _relatedID;

}

@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * uaID;                     //@synthesize uaID=_uaID - In the implementation block
@property (nonatomic,retain) NSString * relatedID;                //@synthesize relatedID=_relatedID - In the implementation block
@property (assign,nonatomic) unsigned expectedCount;              //@synthesize expectedCount=_expectedCount - In the implementation block
@property (assign,nonatomic) unsigned completeCount;              //@synthesize completeCount=_completeCount - In the implementation block
@property (assign,nonatomic) unsigned errorCount;                 //@synthesize errorCount=_errorCount - In the implementation block
@property (assign,nonatomic) unsigned deleteCount;                //@synthesize deleteCount=_deleteCount - In the implementation block
+(void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2 ;
+(void)initialize;
-(void)setDeleteCount:(unsigned)arg1 ;
-(void)add;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3 ;
-(void)setExpectedCount:(unsigned)arg1 ;
-(NSString *)uaID;
-(NSString *)relatedID;
-(unsigned)expectedCount;
-(unsigned)completeCount;
-(void)setCompleteCount:(unsigned)arg1 ;
-(void)setUaID:(NSString *)arg1 ;
-(void)setRelatedID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(unsigned)deleteCount;
-(unsigned)errorCount;
-(void)setErrorCount:(unsigned)arg1 ;
-(void)update:(int)arg1 ;
@end
