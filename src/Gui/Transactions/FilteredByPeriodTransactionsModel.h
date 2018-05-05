// Copyright (c) 2015-2018, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// pinkstarcoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// pinkstarcoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with pinkstarcoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QDateTime>
#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByPeriodTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByPeriodTransactionsModel)

public:
  explicit FilteredByPeriodTransactionsModel(QObject* _parent);
  ~FilteredByPeriodTransactionsModel();

  void setFilter(const QDateTime& _begin, const QDateTime& _end);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  QDateTime m_begin;
  QDateTime m_end;
};

}
