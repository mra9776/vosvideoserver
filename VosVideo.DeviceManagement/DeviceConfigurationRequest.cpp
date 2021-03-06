#include "stdafx.h"
#include "DeviceConfigurationRequest.h"

using namespace std;
using namespace vosvideo::devicemanagement;

DeviceConfigurationRequest::DeviceConfigurationRequest() : 
	userAccountId_(L""), siteId_(L"")
{
}

DeviceConfigurationRequest::DeviceConfigurationRequest(const wstring& accountid, const wstring& siteid) : 
	userAccountId_(accountid), siteId_(siteid)
{
}

DeviceConfigurationRequest::~DeviceConfigurationRequest()
{
}

web::json::value DeviceConfigurationRequest::ToJsonValue() const
{
	web::json::value jObj;
	jObj[U("AccountId")] = web::json::value::string(userAccountId_);
	jObj[U("SiteId")] = web::json::value::string(siteId_);
	return jObj;
}

void DeviceConfigurationRequest::FromJsonValue(const web::json::value& obj)
{
}

wstring DeviceConfigurationRequest::ToString() const
{
	return L"";
}

const std::wstring& DeviceConfigurationRequest::GetAccountId() const
{
	return userAccountId_;
}

const std::wstring& DeviceConfigurationRequest::GetSiteId() const
{
	return siteId_;
}

