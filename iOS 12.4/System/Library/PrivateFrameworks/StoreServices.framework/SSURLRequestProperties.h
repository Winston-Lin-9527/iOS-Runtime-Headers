/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSString, NSData, NSObject, NSInputStream, NSArray, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _additionalMetrics;
	long long _allowedRetryCount;
	BOOL _allowsBootstrapCellularData;
	unsigned long long _cachePolicy;
	NSString* _clientAuditBundleIdentifier;
	NSData* _clientAuditTokenData;
	NSString* _clientIdentifier;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _expectedContentLength;
	NSData* _httpBody;
	NSInputStream* _httpBodyStream;
	NSDictionary* _httpHeaders;
	NSString* _httpMethod;
	BOOL _isITunesStoreRequest;
	long long _kbsyncType;
	BOOL _largeDownload;
	long long _machineDataStyle;
	unsigned long long _networkServiceType;
	NSDictionary* _requestParameters;
	BOOL _requiresCellularDataNetwork;
	char _requiresExtendedValidationCertificates;
	BOOL _requiresExternal;
	BOOL _requiresHTTPS;
	BOOL _shouldDecodeResponse;
	BOOL _shouldDisableCellular;
	BOOL _shouldDisableCellularFallback;
	BOOL _shouldDisableReversePush;
	BOOL _shouldDisableReversePushSampling;
	BOOL _shouldProcessProtocol;
	BOOL _shouldSendSecureToken;
	BOOL _shouldSetCookies;
	double _timeoutInterval;
	NSString* _urlBagKey;
	long long _urlBagType;
	/*^block*/id _urlBagURLBlock;
	NSArray* _urls;
	NSArray* _userAgentComponents;

}

@property (copy,readonly) NSDictionary * additionalMetrics; 
@property (readonly) BOOL allowsBootstrapCellularData; 
@property (readonly) BOOL canBeResolved; 
@property (copy,readonly) NSString * clientAuditBundleIdentifier; 
@property (copy,readonly) NSData * clientAuditTokenData; 
@property (readonly) NSString * clientBundleIdentifier; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) long long KBSyncType; 
@property (getter=isLargeDownload,readonly) BOOL largeDownload; 
@property (readonly) BOOL requiresCellularDataNetwork; 
@property (readonly) BOOL requiresExtendedValidationCertificates; 
@property (readonly) BOOL requiresExternal; 
@property (readonly) BOOL requiresHTTPS; 
@property (readonly) BOOL shouldAddKBSyncData; 
@property (readonly) BOOL shouldDecodeResponse; 
@property (readonly) BOOL shouldDisableCellularFallback; 
@property (readonly) BOOL shouldDisableCellular; 
@property (readonly) BOOL shouldDisableReversePush; 
@property (readonly) BOOL shouldDisableReversePushSampling; 
@property (readonly) BOOL shouldProcessProtocol; 
@property (readonly) BOOL shouldSendSecureToken; 
@property (readonly) BOOL shouldSetCookies; 
@property (readonly) long long URLBagType; 
@property (copy,readonly) id URLBagURLBlock; 
@property (copy,readonly) NSArray * URLs; 
@property (readonly) long long allowedRetryCount; 
@property (copy,readonly) NSString * clientIdentifier; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSData * HTTPBody; 
@property (copy,readonly) NSDictionary * HTTPHeaders; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest; 
@property (readonly) long long machineDataStyle; 
@property (readonly) unsigned long long networkServiceType; 
@property (copy,readonly) NSDictionary * requestParameters; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSString * URLBagKey; 
@property (retain,readonly) NSURL * URL; 
@property (copy,readonly) NSArray * userAgentComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)networkServiceType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned long long)cachePolicy;
-(NSString *)HTTPMethod;
-(double)timeoutInterval;
-(NSData *)HTTPBody;
-(long long)expectedContentLength;
-(NSString *)clientIdentifier;
-(BOOL)isITunesStoreRequest;
-(BOOL)shouldDecodeResponse;
-(long long)machineDataStyle;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldSetCookies;
-(NSArray *)userAgentComponents;
-(BOOL)allowsBootstrapCellularData;
-(NSInputStream *)HTTPBodyStream;
-(NSString *)clientAuditBundleIdentifier;
-(NSData *)clientAuditTokenData;
-(long long)allowedRetryCount;
-(NSDictionary *)additionalMetrics;
-(BOOL)shouldProcessProtocol;
-(BOOL)shouldSendSecureToken;
-(BOOL)isLargeDownload;
-(long long)KBSyncType;
-(BOOL)requiresCellularDataNetwork;
-(BOOL)requiresExtendedValidationCertificates;
-(BOOL)requiresExternal;
-(BOOL)requiresHTTPS;
-(BOOL)shouldAddKBSyncData;
-(BOOL)shouldDisableCellularFallback;
-(BOOL)shouldDisableReversePush;
-(BOOL)shouldDisableReversePushSampling;
-(BOOL)canBeResolved;
-(NSDictionary *)requestParameters;
-(id)copyURLRequest;
-(id)URLBagURLBlock;
-(NSDictionary *)HTTPHeaders;
-(id)_initCommon;
-(id)initWithURLRequest:(id)arg1 ;
-(long long)URLBagType;
-(NSString *)URLBagKey;
-(NSString *)clientBundleIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(NSArray *)URLs;
@end
