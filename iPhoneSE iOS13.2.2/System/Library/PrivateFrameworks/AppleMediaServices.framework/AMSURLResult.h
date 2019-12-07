/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURLSessionTaskMetrics, NSURLResponse, NSURLSessionTask, NSDictionary;

@interface AMSURLResult : NSObject {

	NSData* _data;
	NSString* _logUUID;
	NSURLSessionTaskMetrics* _taskMetrics;
	NSURLResponse* _response;
	NSURLSessionTask* _task;
	id _object;

}

@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                   //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,readonly) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) id object;                                            //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * responseCorrelationId; 
@property (nonatomic,readonly) long long responseStatusCode; 
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
-(id)object;
-(void)setObject:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(long long)responseStatusCode;
-(NSDictionary *)responseHeaders;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(NSString *)logUUID;
-(void)setLogUUID:(NSString *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 object:(id)arg2 ;
-(id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4 ;
-(NSString *)responseCorrelationId;
@end
